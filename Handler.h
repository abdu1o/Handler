#pragma once

class Handler
{
public:

    virtual Handler* SetNext(Handler* handler) = 0;
    virtual std::string Handle(string request) = 0;
};

class AbstractHandler : public Handler
{
private:
    Handler* _next_handler;

public:
    AbstractHandler() : _next_handler(nullptr) {}

    Handler* SetNext(Handler* handler) override
    {
        this->_next_handler = handler;
        return handler;
    }

    string Handle(string request) override
    {
        if (this->_next_handler)
        {
            return this->_next_handler->Handle(request);
        }
    }
};