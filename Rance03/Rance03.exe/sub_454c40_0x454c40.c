// 函数: sub_454c40
// 地址: 0x454c40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

for (int32_t* i = *(arg1 + 0x38); i != *(arg1 + 0x3c); i = &i[1])
    int32_t* ecx = *i
    
    if (ecx != 0)
        (*(*ecx + 0x44))(1)

*(arg1 + 0x3c) = *(arg1 + 0x38)
int32_t arg_4
int32_t ebx_1 = arg_4

if (sub_468d00(ebx_1, arg1 + 4) != 0 && sub_468d00(ebx_1, arg1 + 0x1c) != 0
        && sub_468b20(ebx_1, arg1 + 0x34) != 0 && sub_468b20(ebx_1, &arg_4) != 0)
    int32_t ebp_1 = arg_4
    int32_t edi_1 = 0
    
    if (ebp_1 s<= 0)
        return 1
    
    int32_t* esi
    
    while (true)
        struct IDebugFileFunction::debugfile::CFunction::VTable** eax_7 = sub_69adc6(0x74)
        
        if (eax_7 == 0)
            esi = nullptr
        else
            esi = sub_453de0(eax_7)
        
        arg_4 = esi
        
        if (sub_453f20(esi, ebx_1) == 0)
            break
        
        sub_412de0(arg1 + 0x38, &arg_4)
        edi_1 += 1
        
        if (edi_1 s>= ebp_1)
            return 1
    
    if (esi != 0)
        (*(*esi + 0x44))(1)

return 0
