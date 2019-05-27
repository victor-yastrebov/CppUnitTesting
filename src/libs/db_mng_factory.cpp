#include"db_mng_factory.h"

std::unique_ptr<IDatabaseManager> DbMngFactory::pDbMng = nullptr;