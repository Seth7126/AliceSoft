// 函数: sub_4b8340
// 地址: 0x4b8340
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = data_7fcb68
int32_t result
int32_t* ecx_1

if (*(esi + 4) != 0)
label_4b836f:
    
    if ((*(**(esi + 4) + 0x30))().b != 0)
        result.b = 1
        return result
    
    esi = data_7fcb68
    ecx_1 = data_7fcb88
else
    ecx_1 = data_7fcb88
    
    if (ecx_1 != 0)
        result = (**ecx_1)(0x75ff30)
        *(esi + 4) = result
        
        if (result != 0)
            goto label_4b836f
        
        esi = data_7fcb68
        ecx_1 = data_7fcb88

if (*(esi + 4) != 0)
label_4b83a3:
    
    if ((*(**(esi + 4) + 0x2c))().b != 0)
        result.b = 1
        return result
else if (ecx_1 != 0)
    result = (**ecx_1)(0x75ff30)
    *(esi + 4) = result
    
    if (result != 0)
        goto label_4b83a3

result.b = 0
return result
