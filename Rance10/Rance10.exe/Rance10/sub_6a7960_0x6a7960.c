// 函数: sub_6a7960
// 地址: 0x6a7960
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* eax = "undefined"

if (arg2 != 0)
    eax = arg2

char* var_8 = eax
void* eax_1 = ___acrt_iob_func(2)
int32_t edx = sub_65e8b0(eax_1, arg2, arg1, eax_1, "libpng error: %s")
void* eax_2 = ___acrt_iob_func(2)
sub_65e8b0(eax_2, edx, arg1, eax_2, 0x7e4114)

if (arg1 != 0)
    int32_t eax_3 = *(arg1 + 0x40)
    
    if (eax_3 != 0)
        int32_t ecx = *(arg1 + 0x44)
        
        if (ecx != 0)
            eax_3(ecx, 1)

ExitProcess(0)
noreturn
