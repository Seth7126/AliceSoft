// 函数: sub_5d5e80
// 地址: 0x5d5e80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg2 u>= (*(arg1 + 0xc) - *(arg1 + 8)) s>> 2)
    int32_t eax_2
    eax_2.b = 0
    return eax_2

int32_t esi = *(*(arg1 + 8) + (arg2 << 2))
int32_t eax_3

if (esi != 0)
    int32_t eax_4 = *(esi + 0x18)
    
    if (eax_4 != 1)
        *(esi + 0x18) = eax_4 - 1
        eax_3.b = 1
        return eax_3
    
    switch (*(esi + 0x14))
        case 0
            eax_3 = sub_5d6540(arg1)
            
            if (eax_3.b == 0)
                return eax_3
            
            goto label_5d5f0a
        case 1
            eax_3 = sub_5d6370(arg1, arg2)
            
            if (eax_3.b == 0)
                return eax_3
            
            goto label_5d5f0a
        case 2, 5
        label_5d5f0a:
            int32_t temp1_1 = *(esi + 0x18)
            *(esi + 0x18) -= 1
            
            if (temp1_1 != 1)
                eax_3.b = 1
                return eax_3
            
            switch (*(esi + 0x14))
                case 0
                    sub_5d5b90(arg1 + 0x1c, esi)
                case 1
                    sub_5d5b90(arg1 + 0x1c, esi)
                case 2
                    sub_5d5b90(arg1 + 0x1c, esi)
                case 3
                    sub_5d5b90(arg1 + 0x1c, esi)
                case 4
                    sub_5d5b90(arg1 + 0x1c, esi)
                case 5
                    sub_5d5b90(arg1 + 0x1c, esi)
            
            *(*(arg1 + 8) + (arg2 << 2)) = 0
            sub_64adf0(arg1 + 0x34, arg2)
            int32_t eax_7
            eax_7.b = 1
            return eax_7
        case 3
            if (sub_5d4a90(esi).b != 0)
                goto label_5d5f0a
        case 4
            if (sub_5d6570(arg1, arg2).b != 0 && sub_5d6370(arg1, arg2).b != 0)
                goto label_5d5f0a

eax_3.b = 0
return eax_3
