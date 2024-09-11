#include "Error.h"
#include "Parm.h"
#include "In.h"
#include <locale>
#include <cwchar>
#include <windows.h>
#include <tchar.h>
#include "Log.h"
using namespace std;

int _tmain(int argc, const _TCHAR* argv[])
{
    setlocale(LC_ALL, "Russian");
    Log::LOG log = Log::INITLOG;
    try
    {
        Parm::PARM parm = Parm::getparm(argc, argv);
        log = Log::getlog(parm.log);
        Log::WriteLog(log);
        Log::WriteParm(log, parm);
        In::INTAB in = In::getin(parm.in, parm.out);
        Log::WriteIn(log, in);
        Log::Close(log);
    }
    catch (Error::ERRORS e)
    {
        Log::WriteError(log, e);
    }
    system("pause");
    return 0;
}
