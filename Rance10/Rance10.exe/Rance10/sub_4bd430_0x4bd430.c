// 函数: sub_4bd430
// 地址: 0x4bd430
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = *arg2
int32_t* edi = *arg1
int32_t eax_2 = (*(*esi + 0x14))()
int32_t ebp = (*(*esi + 0x10))()
int32_t* result_3 = (*(*edi + 0x14))()
int32_t edx_2 = *edi
int32_t* result_1 = result_3
int32_t* result_4 = (*(edx_2 + 0x10))()
int32_t* result_2 = result_4

if (ebp s< eax_2)
    ebp = eax_2

int32_t* ecx_4 = &result_1

if (result_4 s>= result_3)
    ecx_4 = &result_2

if (ebp s> *ecx_4)
    int32_t ecx_5 = *arg2
    *arg2 = *arg1
    *arg1 = ecx_5

int32_t* edi_1 = *arg2
int32_t* arg_4
int32_t* esi_3 = *arg_4
int32_t eax_6 = (*(*esi_3 + 0x14))()
int32_t ebp_1 = (*(*esi_3 + 0x10))()
int32_t* result_5 = (*(*edi_1 + 0x14))()
int32_t edx_6 = *edi_1
result_2 = result_5
int32_t* result = (*(edx_6 + 0x10))()
result_1 = result
int32_t* ecx_10 = &result_2

if (ebp_1 s< eax_6)
    ebp_1 = eax_6

if (result s>= result_5)
    ecx_10 = &result_1

if (ebp_1 s> *ecx_10)
    int32_t* edx_7 = arg_4
    int32_t* esi_5 = *edx_7
    *edx_7 = *arg2
    *arg2 = esi_5
    int32_t* edi_3 = *arg1
    int32_t eax_10 = (*(*esi_5 + 0x14))()
    int32_t ebp_2 = (*(*esi_5 + 0x10))()
    int32_t* eax_12 = (*(*edi_3 + 0x14))()
    int32_t edx_10 = *edi_3
    arg_4 = eax_12
    result = (*(edx_10 + 0x10))()
    result_2 = result
    int32_t** ecx_16 = &arg_4
    
    if (ebp_2 s< eax_10)
        ebp_2 = eax_10
    
    if (result s>= eax_12)
        ecx_16 = &result_2
    
    if (ebp_2 s> *ecx_16)
        int32_t ecx_17 = *arg2
        result = *arg1
        *arg2 = result
        *arg1 = ecx_17

return result
