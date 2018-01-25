#ifndef webServer_h
#define webServer_h

void returnOK();
void returnFail(String msg);
bool loadFromSdCard(String path);
void handleFileUpload();
void deleteRecursive(String path);
void handleDelete();
void handleCreate();
void printDirectory();
void handleNotFound();
void handleStatus();
void handleVcal();
void handleCommand();
void handleGetFeedList();
void handleGetFeedData();
void handleGraphCreate();
void handleGraphUpdate();
void handleGraphGetall();
void handleGraphDelete();
void sendMsgFile(File &dataFile, int32_t relPos);
void handleGetConfig();
void sendChunked(String response);

#endif