// 函数: sub_10002e04
// 地址: 0x10002e04
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

uint32_t var_8 = arg3
uint32_t numberOfBytesWritten = arg3
int32_t edi
int32_t var_18 = edi
int32_t edi_1 = 0
int32_t var_8_1 = 0

while (arg4 != *((edi_1 << 3) + &data_10020060))
    edi_1 += 1
    var_8_1 = edi_1
    
    if (edi_1 u>= 0x17)
        break

if (edi_1 u>= 0x17)
    return 

int32_t eax = sub_10007270(3)

if (eax != 1)
    arg1 = sub_10007270(3)

if (eax == 1 || (arg1 == 0 && data_10021a24 == 1))
    arg1 = GetStdHandle(STD_ERROR_HANDLE)
    
    if (arg1 != 0 && arg1 != 0xffffffff)
        uint32_t nNumberOfBytesToWrite = _strlen((&data_10020064)[edi_1 * 2])
        WriteFile(arg1, (&data_10020064)[edi_1 * 2], nNumberOfBytesToWrite, &numberOfBytesWritten, 
            nullptr)
else if (arg4 != 0xfc)
    if (sub_10003cd0(0x10021d50, 0x314, "Runtime Error!\n\nProgram: ") != 0)
        int32_t var_2c_1
        __builtin_memset(&var_2c_1, 0, 0x14)
        sub_10001fbc()
        noreturn
    
    data_10021e6d = 0
    
    if (GetModuleFileNameA(nullptr, &data_10021d69, 0x104) == 0
            && sub_10003cd0(&data_10021d69, 0x2fb, "<program name unknown>") != 0)
        int32_t var_2c_2
        __builtin_memset(&var_2c_2, 0, 0x14)
        sub_10001fbc()
        noreturn
    
    if (_strlen(&data_10021d69) + 1 u> 0x3c)
        void* eax_7 = _strlen(&data_10021d69) + 0x10021d2e
        
        if (sub_100071bb(eax_7, &data_10022064 - eax_7, "...", 3) != 0)
            int32_t var_2c_4
            __builtin_memset(&var_2c_4, 0, 0x14)
            sub_10001fbc()
            noreturn
    
    if (sub_10007147(0x10021d50, 0x314, "\n\n") != 0)
        int32_t var_2c_5
        __builtin_memset(&var_2c_5, 0, 0x14)
        sub_10001fbc()
        noreturn
    
    if (sub_10007147(0x10021d50, 0x314, (&data_10020064)[var_8_1 * 2]) != 0)
        int32_t var_2c_6
        __builtin_memset(&var_2c_6, 0, 0x14)
        sub_10001fbc()
        noreturn
    
    sub_10006fde(0x10021d50, "Microsoft Visual C++ Runtime Library", 0x12010)
