// 函数: sub_47f230
// 地址: 0x47f230
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = data_7fcb68
void** esi = arg2

if (*(edi + 4) != 0)
label_47f261:
    
    if (esi[5] u>= 0x10)
        esi = *esi
    
    (*(**(edi + 4) + 8))(arg3, esi, arg4)
else
    int32_t* ecx = data_7fcb88
    
    if (ecx != 0)
        arg1 = (**ecx)(0x75ff30)
        *(edi + 4) = arg1
        
        if (arg1 != 0)
            goto label_47f261
