#pragma once

class Light : public AbstractHandler
{

public:

    string Handle(string request) override
    {
        if (request == "Light on")
        {
            return "Light turned on";
        }
        else if (request == "Light off")
        {
            return "Light turned off";
        }
        else
        {
            return AbstractHandler::Handle(request);
        }
    }
};

class Conditioner : public AbstractHandler
{
public:

    string Handle(string request) override
    {
        if (request == "Conditioner on")
        {
            return "Conditioner turned on";
        }
        else if (request == "Conditioner off")
        {
            return "Conditioner turned off";
        }
        else
        {
            return AbstractHandler::Handle(request);
        }
    }
};

class MusicPlayer : public AbstractHandler
{

public:

    string Handle(string request) override
    {
        if (request == "Music player on")
        {
            return "Music player turned on";
        }
        else if (request == "Music player off")
        {
            return "Music player turned off";
        }
        else
        {
            return AbstractHandler::Handle(request);
        }
    }
};