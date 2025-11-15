// 函数: sub_629f80
// 地址: 0x629f80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = *(arg1 + 0x38)

if (esi == 0)
    return 

int32_t i = 0

if ((*(esi + 0x30) - *(esi + 0x2c)) s/ 0x70 s<= 0)
    return 

int32_t edi_1 = 0

do
    switch (*(edi_1 + *(esi + 0x2c) + 0x34) - 0x12)
        case 0, 1, 2, 3, 0x21, 0x31, 0x3e, 0x47, 0x4b
            int32_t eax_8
            
            if (*(arg1 + 0x14) != 0)
                eax_8 = *(arg1 + 0x10)
            else
                eax_8 = 0
            
            sub_621d30(*(arg1 + 0x24), *(eax_8 + (i << 2)))
    
    i += 1
    edi_1 += 0x70
while (i s< (*(esi + 0x30) - *(esi + 0x2c)) s/ 0x70)
