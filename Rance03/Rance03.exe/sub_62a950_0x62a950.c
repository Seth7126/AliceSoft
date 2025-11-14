// 函数: sub_62a950
// 地址: 0x62a950
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* eax = "undefined"

if (arg2 != 0)
    eax = arg2

char* var_8 = eax
_fprintf(0x74a1b8, "libpng error: %s")
_fprintf(0x74a1b8, U"\n")

if (arg1 != 0)
    int32_t eax_1 = *(arg1 + 0x40)
    
    if (eax_1 != 0)
        int32_t ecx = *(arg1 + 0x44)
        
        if (ecx != 0)
            eax_1(ecx, 1)

ExitProcess(0)
noreturn
