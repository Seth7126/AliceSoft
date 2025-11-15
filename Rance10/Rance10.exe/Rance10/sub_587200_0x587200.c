// 函数: sub_587200
// 地址: 0x587200
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = arg1[1]
int32_t ecx = *arg1
int32_t edi_2 = (eax - ecx) s>> 3

if (edi_2 u> arg2)
    int32_t __saved_ebp = arg2
    int32_t var_14_1 = ecx
    int32_t esi_2 = eax + ((arg2 - edi_2) << 3)
    struct _EXCEPTION_REGISTRATION_RECORD** eax_1 = Concurrency::details::Etw::Etw(esi_2, eax)
    arg1[1] = esi_2
    return eax_1

if (edi_2 u< arg2)
    int32_t* ebp_1 = arg3
    
    if (ebp_1 u>= eax || ecx u> ebp_1)
        sub_587320(arg1, arg2 - edi_2)
    else
        sub_587320(arg1, arg2 - edi_2)
        ebp_1 = *arg1 + ((ebp_1 - ecx) s>> 3 << 3)
    
    int32_t* ecx_4 = arg1[1]
    int32_t var_14_4 = arg2
    int32_t* var_18_1 = ecx_4
    int32_t eax_9 = (ecx_4 - *arg1) s>> 3
    sub_587440(eax_9, arg2 - eax_9, ecx_4, ebp_1)
    eax = (arg1[1] - *arg1) s>> 3
    arg1[1] += (arg2 - eax) << 3

return eax
