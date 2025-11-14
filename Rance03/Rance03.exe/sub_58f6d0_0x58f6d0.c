// 函数: sub_58f6d0
// 地址: 0x58f6d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
void** esi = arg2
void** eax_1

if (sub_590700(arg1, esi) == 0)
    if (sub_525610(arg1 + 0x30, esi).b != 0)
        int32_t edx_1
        eax_1, edx_1 = sub_525700(arg1 + 0x30, esi)
        *arg3 = eax_1
        
        if (eax_1 == 0)
            if (esi[5] u>= 0x10)
                esi = *esi
            
            sub_59f4e0(eax_1, edx_1, arg3, 0x6e5bbc, esi)
            enum MESSAGEBOX_RESULT eax_2
            eax_2.b = 0
            return eax_2
else
    eax_1 = sub_58f810(arg1, esi)
    *arg3 = eax_1
    
    if (eax_1 == 0)
        eax_1.b = 0
        return eax_1

eax_1.b = 1
return eax_1
