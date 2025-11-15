// 函数: sub_636af0
// 地址: 0x636af0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx
int32_t var_4 = ebx
int32_t* esi = arg1
arg1.b = 0
int32_t i = esi[0x13]

if (i != 0xffffffff)
    while (i != 0x7c)
        if (i == 0x29)
            if (esi[4] != 0)
                break
            
            if ((esi[0x14] & 0x10000000) == 0)
                sub_6d0967(5)
                noreturn
        
        if (i == 0x2e)
            sub_636ee0(&esi[9], 5)
            int16_t* edi_1 = *esi
            
            if (edi_1 != esi[2])
                if (*edi_1 == 0x5c && sub_636a80(esi) != 0)
                    *esi = &edi_1[1]
                
                *esi += 2
            
            sub_635790(esi)
            sub_637ef0(esi)
        else if (i == 0x5c)
            int16_t* edi_2 = *esi
            
            if (edi_2 != esi[2])
                if (*edi_2 == i.w && sub_636a80(esi) != 0)
                    *esi = &edi_2[1]
                
                *esi += 2
            
            sub_635790(esi)
            int32_t eax_5 = esi[0x14] & 0x80
            
            if (eax_5 != 0 && esi[0x12].w == 0x62)
                sub_636ee0(&esi[9], 4)
                sub_636ac0(esi)
            else if (eax_5 == 0 || esi[0x12].w != 0x42)
                sub_637cb0(esi)
                sub_637ef0(esi)
            else
                sub_636ee0(&esi[9], 4)
                void* eax_6 = esi[0xa]
                *(eax_6 + 8) ^= 1
                sub_636ac0(esi)
        else if (i == 0x5b)
            int16_t* edi_3 = *esi
            
            if (edi_3 != esi[2])
                if (*edi_3 == 0x5c && sub_636a80(esi) != 0)
                    *esi = &edi_3[1]
                
                *esi += 2
            
            sub_635790(esi)
            sub_637bc0(esi)
            
            if (esi[0x13] != 0x5d)
                sub_6d0967(4)
                noreturn
            
            int16_t* edi_4 = *esi
            
            if (edi_4 != esi[2])
                if (*edi_4 == 0x5c && sub_636a80(esi) != 0)
                    *esi = &edi_4[1]
                
                *esi += 2
            
            sub_635790(esi)
            sub_637ef0(esi)
        else if (i == 0x28)
            sub_636ac0(esi)
            ebx.b = sub_637df0(esi)
            
            if (esi[0x13] != 0x29)
                sub_6d0967(5)
                noreturn
            
            int16_t* edi_5 = *esi
            
            if (edi_5 != esi[2])
                if (*edi_5 == 0x5c && sub_636a80(esi) != 0)
                    *esi = &edi_5[1]
                
                *esi += 2
            
            sub_635790(esi)
            
            if (ebx.b != 0)
                sub_637ef0(esi)
        else if (i == 0x5e)
            sub_636ee0(&esi[9], 2)
            sub_636ac0(esi)
        else if (i != 0x24)
            if (i == 0x2a || i == 0x2b || i == 0x3f || i == 0x7b)
                sub_6d0967(0xa)
                noreturn
            
            if (i == 0x7d && (esi[0x14] & 0x10000000) == 0)
                sub_6d0967(6)
                noreturn
            
            if (i == 0x5d && (esi[0x14] & 0x10000000) == 0)
                sub_6d0967(4)
                noreturn
            
            sub_638020(&esi[9], zx.d(esi[0x12].w))
            sub_636ac0(esi)
            sub_637ef0(esi)
        else
            sub_636ee0(&esi[9], 3)
            sub_636ac0(esi)
        
        i = esi[0x13]
        arg1.b = 1
        
        if (i == 0xffffffff)
            break

i.b = arg1.b
return i
