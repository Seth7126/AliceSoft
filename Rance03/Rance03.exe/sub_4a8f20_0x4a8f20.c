// 函数: sub_4a8f20
// 地址: 0x4a8f20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_c = arg1
char* edi = *(arg2 + 4)
int32_t ecx = *(arg2 + 8)

if (&edi[4] u<= ecx)
    uint32_t edx_7 = ((zx.d(edi[3]) << 8 | zx.d(edi[2])) << 8 | zx.d(edi[1])) << 8 | zx.d(*edi)
    *(arg2 + 4) = &edi[4]
    
    if (&edi[8] u<= ecx)
        uint32_t ecx_7 =
            ((zx.d(edi[7]) << 8 | zx.d(edi[6])) << 8 | zx.d(edi[5])) << 8 | zx.d(edi[4])
        *(arg2 + 4) = &edi[8]
        struct partsengine::CGUIController::VTable** result = sub_4a8310(arg1, edx_7, ecx_7)
        
        if (sub_4ad3f0(&result[4], arg2) != 0)
            sub_4a6b90(&result[1][0x13])
            return result
        
        if (result != 0)
            (*result)->vFunc_0(1)

return 0
