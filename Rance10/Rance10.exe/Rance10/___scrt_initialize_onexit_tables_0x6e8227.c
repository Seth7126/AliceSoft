// 函数: ___scrt_initialize_onexit_tables
// 地址: 0x6e8227
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 != 0 && arg1 != 1)
    sub_6e911b(5)
    breakpoint

int32_t result

if (___asan_report_present() == 0 || arg1 != 0)
    result = ror.d(0xffffffff, 0x20 - ((__security_cookie).b & 0x1f)) ^ __security_cookie
    int32_t result_2 = result
    int32_t result_3 = result
    data_7fbef8 = result
    void* edi_1 = &data_7fbefc
    int32_t* esi_1 = &result_2
    *edi_1 = *esi_1
    *(edi_1 + 4) = esi_1[1]
    int32_t result_1 = result
    result_2 = result
    int32_t result_4 = result
    result.b = 1
    data_7fbf04 = result_1
    void* edi_4 = &data_7fbf08
    int32_t* esi_4 = &result_2
    *edi_4 = *esi_4
    *(edi_4 + 4) = esi_4[1]
else if (__initialize_onexit_table(&data_7fbef8) == 0)
    int32_t eax_1 = __initialize_onexit_table(&data_7fbf04)
    result = neg.d(eax_1)
    result.b = sbb.b(result.b, result.b, eax_1 != 0)
    result.b += 1
else
    result.b = 0

return result
