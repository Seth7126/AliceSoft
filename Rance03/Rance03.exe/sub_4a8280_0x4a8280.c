// 函数: sub_4a8280
// 地址: 0x4a8280
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

struct partsengine::CPartsList::VTable** result = *(arg1 + 0x54)

if (result != 0)
label_4a82c5:
    int32_t arg_4
    int32_t ecx_6 = arg_4
    
    if (ecx_6 != 0)
        void* esi_1 = result[1]
        int32_t edi_2 = *(ecx_6 + 0x2c)
        result = sub_4a67c0(esi_1 + 0x4c, edi_2)
        
        if (result.b != 0)
            void* esi_2 = *(esi_1 + 0x58)
            arg_4 = edi_2
            sub_4b7b70(esi_2, edi_2)
            result = sub_4158d0(esi_2 + 0x94, &arg_4)
            *(esi_2 + 4) = 1
else
    if (*(arg1 + 0x48) == *(arg1 + 0x4c))
        struct partsengine::CGUIController::VTable** eax_1 = sub_4e7cb0(arg1 + 0x28)
        sub_4a8470(arg1, sub_4e7cb0(arg1 + 0x28), eax_1, 0)
    
    result = *(*(arg1 + 0x48) + ((*(arg1 + 0x4c) - *(arg1 + 0x48)) s>> 2 << 2) - 4)
    
    if (result != 0)
        goto label_4a82c5

return result
