namespace Phalcon\Mvc\Collection;

use Phalcon\Mvc\Collection;

class BatchStorage {
    protected _collection;

    protected _documentsStorage = [];
    /**
	 * Phalcon\Mvc\Collection\BatchStorage constructor
	 */
	public final function __construct(<Collection> collection = null)
	{
		let this->_collection = collection;

		/**
		 * This allows the developer to execute initialization stuff every time an instance is created
		 */
		if method_exists(this, "onConstruct") {
			this->{"onConstruct"}();
		}
	}

	public function getStoredDocuments() -> array
	{
	    return this->_documentsStorage;
	}

	public function addDocumentToStorage(<Collection> document)
	{
        let this->_documentsStorage[] = document->toArray();
	}

	public function truncateStorage()
	{
	    let this->_documentsStorage = [];
	}

	public function save() -> boolean
	{
        var dependencyInjector, connection, exists, source, data,
            success, status, id, ok, collection, disableEvents;

        let dependencyInjector = this->_collection->getDi();
        if typeof dependencyInjector != "object" {
            throw new Exception("A dependency injector container is required to obtain the services related to the ORM");
        }

        let source = this->_collection->getSource();
        if empty source {
            throw new Exception("Method getSource() returns empty string");
        }

        let connection = this->_collection->getConnection();

        /**
         * Choose a collection according to the collection name
         */
        let collection = connection->selectCollection(source);

        /**
         * The messages added to the validator are reset here
         */
        let this->_errorMessages = [];

        let success = false;

        /**
         * We always use safe stores to get the success state
         * Save the document
         */
        let status = collection->batchInsert(this->_documentsStorage, ["w": true, "continueOnError": true]);
        if typeof status == "array" {
            if fetch ok, status["ok"] {
                if ok {
                    let success = true;
                }
            }
        } else {
            let success = false;
        }
        return success;
	}


}