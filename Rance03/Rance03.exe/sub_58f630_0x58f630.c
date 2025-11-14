// 函数: sub_58f630
// 地址: 0x58f630
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_c = arg1
void** esi = arg2
struct IMemory::common::CIMemory::VTable** eax_3

if (sub_590700(arg1, esi) == 0)
    struct IMemory::common::CIMemory::VTable** edi_1 = nullptr
    
    if (sub_525610(arg1 + 0x30, esi).b != 0)
        int32_t ecx_3
        int32_t edx_1
        eax_3, ecx_3, edx_1 = sub_525700(arg1 + 0x30, esi)
        edi_1 = eax_3
        
        if (edi_1 == 0)
            if (esi[5] u>= 0x10)
                esi = *esi
            
            sub_59f4e0(eax_3, edx_1, ecx_3, 0x6e5bbc, esi)
            enum MESSAGEBOX_RESULT eax_4
            eax_4.b = 0
            return eax_4
    
    int32_t* ecx_4 = *(arg3 + 4)
    
    if (ecx_4 != 0)
        (*(*ecx_4 + 4))()
    
    *(arg3 + 4) = edi_1
else
    eax_3 = sub_58f750(arg1, esi, arg3 + 8)
    
    if (eax_3.b == 0)
        return eax_3

eax_3.b = 1
return eax_3
