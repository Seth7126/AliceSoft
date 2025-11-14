// 函数: sub_544780
// 地址: 0x544780
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1

for (int32_t* i = *(arg1 + 4); i != *(arg1 + 8); i = &i[1])
    void* edx_1 = *i
    
    if (edx_1 != 0)
        int32_t edi_1 = arg2
        
        if (*(edx_1 + 0xcc) != 0)
            edi_1 *= arg3
        
        sub_556960(edx_1 + 0x124, *(edx_1 + 0x1bc), edi_1)
        sub_556960(edx_1 + 0x140, *(edx_1 + 0x1bc), edi_1)
        sub_53ec40(edx_1, edi_1)

struct _EXCEPTION_REGISTRATION_RECORD** result
result.b = 1
return result
