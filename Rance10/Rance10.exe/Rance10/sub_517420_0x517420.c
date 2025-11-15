// 函数: sub_517420
// 地址: 0x517420
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4 = arg1
int32_t* edi = arg1
void* ebx = edi[0x14]
var_4:3.b = *(ebx + 0x1a8)
int32_t esi = *(*(*(ebx + 0x68) + 0x70) + 0xbc)

if (esi s> 0)
    int32_t var_14_1 = esi
    void* eax_3
    eax_3, arg1 = sub_4f15e0(*(ebx + 0x6c))
    
    if (eax_3 != 0)
        int32_t edx_1 = *(eax_3 + 8)
        int32_t eax_5
        
        if (esi s< edx_1 || *(eax_3 + 4) + edx_1 s<= esi)
            eax_5 = 0
        else
            eax_5 = *(*(eax_3 + 0xc) + ((esi - edx_1) << 2))
        
        if (eax_5 != 0 && var_4:3.b == 0)
            (*(*edi + 0x2c))(sub_4edbb0(ebx))

void* result = edi[0x11]
arg1.b = *(edi[0x14] + 0x8e) == 0
*(result + 0x70) = arg1.b
return result
