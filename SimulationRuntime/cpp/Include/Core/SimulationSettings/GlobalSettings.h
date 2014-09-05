#pragma once


#include <fstream>

class  GlobalSettings : public IGlobalSettings
{

public:
    GlobalSettings(void);
    ~GlobalSettings(void);
    ///< Start time of integration (default: 0.0)
    virtual double getStartTime();
    virtual void setStartTime(double);
    ///< End time of integraiton (default: 1.0)
    virtual double getEndTime();
    virtual void setEndTime(double);
    ///< Output step size (default: 20 ms)
    virtual double gethOutput();
    virtual void sethOutput(double);
    ///< Write out results ([false,true]; default: true)
    virtual bool getResultsOutput();
    virtual void setResultsOutput(bool);
    ///< Write out statistical simulation infos, e.g. number of steps (at the end of simulation); [false,true]; default: true)
    virtual bool getInfoOutput();
    virtual void setInfoOutput(bool);
    virtual bool useEndlessSim();
    virtual void useEndlessSim(bool);
    ///path for simulation results in textfile
    virtual string    getOutputPath();
    virtual void setOutputPath(string);
    virtual OutputFormat getOutputFormat();
    virtual void setOutputFormat(OutputFormat format);

    virtual OutputPointType getOutputPointType();
    virtual void setOutputPointType(OutputPointType);

     virtual LogType getLogType();
    virtual void setLogType(LogType);

    //solver used for simulation
    virtual string    getSelectedSolver();
    virtual void setSelectedSolver(string);
    virtual string    getSelectedNonLinSolver();
    virtual void setSelectedNonLinSolver(string);
    virtual string    getSelectedLinSolver();
    virtual void setSelectedLinSolver(string);
    virtual void setResultsFileName(string);
    virtual string getResultsFileName();
    //initializes the settings object by an xml file
    void load(std::string xml_file);
    virtual void setRuntimeLibrarypath(string);
    virtual string getRuntimeLibrarypath();
    virtual void setAlarmTime(unsigned int);
    virtual unsigned int getAlarmTime();
private:
    double
        _startTime,///< Start time of integration (default: 0.0)
        _endTime,///< End time of integraiton (default: 1.0)
        _hOutput;//< Output step size (default: 20 ms)

    bool
        _resultsOutput,   ///< Write out results ([false,true]; default: true)
        _infoOutput,      ///< Write out statistical simulation infos, e.g. number of steps (at the end of simulation); [false,true]; default: true)
        _endless_sim;
    string
        _output_path,
        _selected_solver,
        _selected_lin_solver,
        _selected_nonlin_solver,
        _resultsfile_name,
        _runtimeLibraryPath;
    OutputFormat _outputFormat;
    OutputPointType _outputPointType;
    LogType _log_type;
    unsigned int _alarm_time;


};