// 函数: sub_41d850
// 地址: 0x41d850
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
int32_t* esi = arg4
var_4 = nullptr
int32_t ebx = esi[5]
int32_t* ecx

if (ebx u< 0x10)
    ecx = esi
else
    ecx = *esi

int32_t edi = esi[4]
int32_t eax = 4

if (edi u< 4)
    eax = edi

void* eax_1 = sub_406ac0(eax, "true", ecx, eax)
void* ebx_1

if (eax_1 == 0 && edi u>= 4 && edi u<= 4)
    ebx_1 = eax_1 + 1
    goto label_41d8d8

int32_t result

if (sub_407560(esi, "false") == 0)
    if (ebx u>= 0x10)
        esi = *esi
    
    void** var_18_1 = &var_4
    
    if (sub_6ca310(esi, 0x7942e0) == 1)
        ebx_1.b = var_4 != 0
        goto label_41d8d8
else
    ebx_1 = nullptr
label_41d8d8:
    void* eax_3 = *(arg1 + 4)
    var_4 = ebx_1
    int32_t* edi_1 = (*(**(eax_3 + 8) + 4))(arg2)
    
    if (edi_1 != 0 && arg3 s>= 0)
        int32_t eax_6
        int32_t edx_2
        edx_2:eax_6 = sx.q((*(*edi_1 + 0x14))())
        
        if (arg3 s< (eax_6 + (edx_2 & 3)) s>> 2)
            result = (*(*edi_1 + 0x18))()
            
            if (result != 0)
                *(result + (arg3 << 2)) = ebx_1
                result.b = 1
                return result

result.b = 0
return result
