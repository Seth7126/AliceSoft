// 函数: sub_1000b237
// 地址: 0x1000b237
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp

if (data_10020e40 == 0)
    goto label_1000b2b9

if (data_10020f04 == 0xfffffffe)
    ___initconout()

HANDLE hConsoleOutput = data_10020f04
BOOL result
uint32_t numberOfCharsWritten
wchar16 arg_4

if (hConsoleOutput != 0xffffffff)
    if (WriteConsoleW(hConsoleOutput, &arg_4, 1, &numberOfCharsWritten, nullptr) != 0)
        data_10020e40 = 1
        result.w = arg_4
    else if (data_10020e40 != 2)
        result = 0xffff
    else if (GetLastError() != ERROR_CALL_NOT_IMPLEMENTED)
        result = 0xffff
    else
        data_10020e40 = 0
    label_1000b2b9:
        void var_10
        int32_t nNumberOfCharsToWrite =
            WideCharToMultiByte(GetConsoleOutputCP(), 0, &arg_4, 1, &var_10, 5, nullptr, nullptr)
        HANDLE hConsoleOutput_1 = data_10020f04
        
        if (hConsoleOutput_1 == 0xffffffff)
            result = 0xffff
        else if (WriteConsoleA(hConsoleOutput_1, &var_10, nNumberOfCharsToWrite, 
                &numberOfCharsWritten, nullptr) == 0)
            result = 0xffff
        else
            result.w = arg_4
else
    result = 0xffff
sub_10001d19(eax_1 ^ &__saved_ebp)
return result
