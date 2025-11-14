// 函数: sub_58f8c0
// 地址: 0x58f8c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
int32_t* esi = arg2
struct IMemory::common::CIMemory::VTable** eax

if (sub_525610(arg1 + 0x30, esi).b != 0)
    int32_t edx_1
    eax, edx_1 = sub_525700(arg1 + 0x30, esi)
    *arg3 = eax
    
    if (eax == 0)
        if (esi[5] u>= 0x10)
            esi = *esi
        
        sub_59f4e0(eax, edx_1, arg3, 0x6e5bbc, esi)
        enum MESSAGEBOX_RESULT eax_1
        eax_1.b = 0
        return eax_1

eax.b = 1
return eax
