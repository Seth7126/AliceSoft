// 函数: sub_634930
// 地址: 0x634930
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_c = arg1
int32_t* esi = arg1

if (arg2 != 0)
    arg2[1].b = 1
    arg1 = sub_633e40(&arg2[2], 0)

int32_t eax = esi[0x15]
int32_t* var_1c = arg1
int32_t var_20 = esi[0x1a]
esi[0x13] = eax
*esi = eax
sub_6024e0(&esi[1], var_20)
sub_632b30(&esi[5], esi[0x1a])
int32_t var_1c_2 = esi[0x16]
esi[0x1e] = 0x989680
esi[0x1f] = 0x3e8
esi[0x19].b = 0
*(esi + 0x65) = arg2 != 0
esi[0x1d].b = arg3
int32_t result = sub_635b70(esi, var_1c_2)

if (result.b == 0)
    return result

if (arg2 != 0)
    void* edi_1 = &arg2[2]
    sub_633e40(edi_1, esi[0x1a])
    int32_t i = 0
    
    if (esi[0x1a] u> 0)
        int32_t* edi_2 = nullptr
        
        do
            int32_t eax_5 = *edi_1
            int32_t eax_9
            
            if ((*(esi[9] + (i u>> 5 << 2)) & 1 << (i.b & 0x1f)) == 0)
                *(eax_5 + edi_2 + 8) = 0
                *(edi_2 + *edi_1) = esi[0x14]
                eax_9 = esi[0x14]
            else
                *(eax_5 + edi_2 + 8) = 1
                *(edi_2 + *edi_1) = *(esi[0xd] + (i << 3))
                eax_9 = *(esi[0xd] + (i << 3) + 4)
            
            i += 1
            *(*edi_1 + edi_2 + 4) = eax_9
            edi_2 = &edi_2[3]
        while (i u< esi[0x1a])
    
    *arg2 = esi[0x13]
    arg2[5] = esi[0x13]
    int32_t eax_14 = **edi_1
    bool cond:1_1 = arg2[5] != eax_14
    arg2[6] = eax_14
    eax_14.b = cond:1_1
    arg2[7].b = eax_14.b
    arg2[8] = *(*edi_1 + 4)
    int32_t eax_17 = esi[0x14]
    bool cond:2_1 = arg2[8] != eax_17
    arg2[9] = eax_17
    eax_17.b = cond:2_1
    arg2[0xa].b = eax_17.b
    arg2[0xb] = esi[0x14]
    arg2[0xc] = esi[0x14]

result.b = 1
return result
