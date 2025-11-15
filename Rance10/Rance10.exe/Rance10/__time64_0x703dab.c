// 函数: __time64
// 地址: 0x703dab
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_18 = edi
uint32_t result_1 = 0
int32_t var_10
int32_t* edi_1 = &var_10
*edi_1 = 0
void* edi_2 = &edi_1[1]
*edi_2 = 0
*(edi_2 + 4) = 0
uint32_t result
int32_t ecx
int32_t edx
int32_t edx_1

if (common_timespec_get<struct _timespec64>(&result_1, edx, ecx, &result_1, 1) == 1)
    edx_1 = var_10
    result = result_1
else
    result = 0xffffffff
    edx_1 = 0xffffffff

if (arg1 != 0)
    *arg1 = result
    arg1[1] = edx_1

return result
