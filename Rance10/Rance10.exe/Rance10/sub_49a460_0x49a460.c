// 函数: sub_49a460
// 地址: 0x49a460
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = arg1[1]
int32_t esi_1 = edi - *arg1
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x2aaaaaab, esi_1)
int32_t ecx_2 = esi_1 s/ 0x30

if (ecx_2 u> 0xa)
    int32_t* var_14_1 = arg1
    int32_t ecx_5 = esi_1 s/ 0x30
    int32_t var_18_1 = ecx_5
    void* esi_4 = (0xa - ecx_5) * 0x30 + edi
    struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> >::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> >(
        esi_4, edi)
    arg1[1] = esi_4
    return eax_3

if (ecx_2 u< 0xa)
    int32_t* var_14_3 = arg1
    int32_t var_18_2 = sub_49a590(arg1, 0xa - ecx_2)
    int32_t eax_5
    int32_t edx_5
    edx_5:eax_5 = muls.dp.d(0x2aaaaaab, arg1[1] - *arg1)
    int32_t edx_6 = edx_5 s>> 3
    sub_49ad40(arg1[1], 0xa - ((edx_6 u>> 0x1f) + edx_6))
    int32_t eax_9
    int32_t edx_8
    edx_8:eax_9 = muls.dp.d(0x2aaaaaab, arg1[1] - *arg1)
    int32_t edx_9 = edx_8 s>> 3
    eax = (0xa - ((edx_9 u>> 0x1f) + edx_9)) * 0x30
    arg1[1] += eax

return eax
