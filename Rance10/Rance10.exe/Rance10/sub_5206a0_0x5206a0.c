// 函数: sub_5206a0
// 地址: 0x5206a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx
ebx.b = arg2
int32_t eax

if (ebx.b == 0)
    void* edi_2 = data_7fcb68
    
    if (*(edi_2 + 4) != 0)
        (*(**(edi_2 + 4) + 0x1c))()
    else
        int32_t* ecx_2 = data_7fcb88
        
        if (ecx_2 != 0)
            eax = (**ecx_2)(0x75ff30)
            *(edi_2 + 4) = eax
            
            if (eax != 0)
                (*(**(edi_2 + 4) + 0x1c))()
else if (*(arg1 + 0x160) != 0)
    void* edi_1 = data_7fcb68
    
    if (*(edi_1 + 4) != 0)
        (*(**(edi_1 + 4) + 0x18))()
    else
        int32_t* ecx = data_7fcb88
        
        if (ecx != 0)
            eax = (**ecx)(0x75ff30)
            *(edi_1 + 4) = eax
            
            if (eax != 0)
                (*(**(edi_1 + 4) + 0x18))()
else
    sub_47f340()

if (*(arg1 + 0x1b8) != ebx.b)
    *(arg1 + 0x1b8) = ebx.b
