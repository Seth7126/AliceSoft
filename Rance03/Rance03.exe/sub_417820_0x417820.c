// 函数: sub_417820
// 地址: 0x417820
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ebp = arg1
void* var_20 = ebp
int32_t eax_2
int32_t edx
edx:eax_2 = sx.q(GetScrollPos(*(ebp + 0xc), SB_HORZ) * *(ebp + 0x54))
int32_t eax_4 = (eax_2 - edx) s>> 1
int32_t eax_5 = GetScrollPos(*(ebp + 0xc), SB_VERT)
int32_t ecx_1 = *(ebp + 0x58) + *(ebp + 0x54)
int32_t edi = data_75d4b0
int32_t ecx_2 = ecx_1 * eax_5
int32_t eax_7
int32_t edx_1
edx_1:eax_7 = sx.q(*(ebp + 0x54))
int32_t var_4 = edi
int32_t eax_9 = (eax_7 - edx_1) s>> 1
int32_t eax_10 = (*(**(ebp + 0x68) + 0x30))(edi)
int32_t esi = 0

if (eax_10 s> 0)
    while (true)
        int32_t* result = (*(**(ebp + 0x68) + 0x34))(edi, esi)
        int32_t edi_4 = (*(*result + 0xc))() * eax_9 - *(var_20 + 0x5c) - eax_4
        int32_t eax_15 = (*(*result + 0x10))() * ecx_1
        
        if (arg2 s>= edi_4 && arg2 s< (*(*result + 0x14))() * eax_9 - *(var_20 + 0x5c) - eax_4
                && arg3 s>= eax_15 - ecx_2 && arg3 s< ((*(*result + 0x10))() + 1) * ecx_1 - ecx_2)
            return result
        
        esi += 1
        
        if (esi s>= eax_10)
            break
        
        ebp = var_20
        edi = var_4

return 0
