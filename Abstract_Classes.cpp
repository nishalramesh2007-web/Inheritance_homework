#include <iostream>
using namespace std;

class AbstractLogger {  
public:
    virtual void log(string message) = 0;  
    virtual void severity(int level) {     
        cout << "Log severity: " << level << endl;
    }
    virtual ~AbstractLogger() {}
};

class FileLogger : public AbstractLogger {
public:
    void log(string message) override {
        cout << "[FILE] " << message << endl;
    }
};

class ConsoleLogger : public AbstractLogger {
public:
    void log(string message) override {
        cout << "[CONSOLE] " << message << endl;
    }
};

int main() {
        
    AbstractLogger* loggers[] = {
        new FileLogger(),
        new ConsoleLogger()
    };
    
    for(int i = 0; i < 2; i++) {
        loggers[i]->log("System started");
        loggers[i]->severity(1);
    }
    
    delete loggers[0];
    delete loggers[1];
    return 0;
}
