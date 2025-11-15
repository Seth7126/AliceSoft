// 函数: sub_54e8e0
// 地址: 0x54e8e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4_1 = arg1

if (arg2 == 0)
    return 0

int32_t ebx
ebx.b = (*(*arg2 + 0x24))()
ebx:1.b = (*(*arg2 + 0x28))()
int32_t eax_5 = (*(*arg2 + 0x10))()
int32_t* eax_6 = (*(*arg2 + 0x14))()
int32_t result

if (ebx.b != 0)
    int32_t* ecx_5 = *(arg1 + 8)
    
    if (ebx:1.b == 0)
        if (ecx_5 != 0)
            result = (*(*ecx_5 + 0xc))(eax_5, eax_6, 0x20)
            goto label_54e968
    else if (ecx_5 != 0)
        result = (*(*ecx_5 + 8))(eax_5, eax_6, 0x20)
        goto label_54e968
else if (ebx:1.b != 0)
    int32_t* ecx_6 = *(arg1 + 8)
    
    if (ecx_6 != 0)
        result = (*(*ecx_6 + 0x10))(eax_5, eax_6)
    label_54e968:
        
        if (result != 0)
            int32_t* ecx_7 = *(arg1 + 0x10)
            
            if (ecx_7 != 0)
                (*(*ecx_7 + 0x5c))(result, 0, 0, arg2, 0, 0, eax_5, eax_6)
            
            return result
return 0
