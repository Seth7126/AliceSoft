// 函数: sub_41a630
// 地址: 0x41a630
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4 = arg1
void* esi = *arg2
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x66666667, arg2[1] - esi)
int32_t edi = arg1[1]
void* ecx = *arg1
int32_t edx_3 = edx_2 s>> 4
int32_t result = (edi - ecx) s/ 0x28

if (result == (edx_3 u>> 0x1f) + edx_3)
    var_4.b = 0
    int32_t* var_14_1 = var_4
    void* var_18_1 = ecx
    
    if (sub_41a6d0(result, edi, ecx, esi).b != 0)
        result.b = 1
        return result

result.b = 0
return result
