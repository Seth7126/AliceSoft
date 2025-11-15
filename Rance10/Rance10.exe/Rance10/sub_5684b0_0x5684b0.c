// 函数: sub_5684b0
// 地址: 0x5684b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = arg1
void* result = esi[1]

if (arg2 u< result)
    arg1 = *esi

int32_t* var_c_2
int32_t* ecx_2

if (arg2 u>= result || arg1 u> arg2)
    if (result == esi[2])
        int32_t* var_c_3 = arg1
        result = sub_568640(esi)
    
    ecx_2 = esi[1]
    
    if (ecx_2 != 0)
        var_c_2 = arg2
    label_5684fb:
        *ecx_2 = 0
        ecx_2[1] = 0
        result = sub_568810(ecx_2, var_c_2)
else
    if (result == esi[2])
        int32_t* var_c_1 = arg1
        result = sub_568640(esi)
    
    ecx_2 = esi[1]
    
    if (ecx_2 != 0)
        var_c_2 = *esi + ((arg2 - arg1) s>> 3 << 3)
        goto label_5684fb
esi[1] += 8
return result
