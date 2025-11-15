// 函数: sub_475990
// 地址: 0x475990
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx = arg3
int32_t edx = arg2[1]
int32_t esi = *arg2
int32_t eax_4 = (edx - esi) s/ 0x18

if (eax_4 s> ebx)
    void* edi_1 = esi + ebx * 0x18
    arg2 = edi_1
    
    do
        void** eax_6 = sub_432330(arg1 + 0x2c, edi_1)
        void** edi_2 = *(arg1 + 0x2c)
        void** esi_1 = eax_6
        char eax_8
        
        if (esi_1 != edi_2)
            eax_8 = sub_412ca0(arg2, &esi_1[4])
        
        if (esi_1 == edi_2 || eax_8 != 0)
            esi_1 = edi_2
        
        if (esi_1 == edi_2)
            break
        
        ebx += 1
        edi_1 = &arg2[6]
        arg2 = edi_1
        
        if ((edx - esi) s/ 0x18 s<= ebx)
            return esi_1[0xa]
        
        arg1 = esi_1[0xa]
    while (eax_4 s> ebx)

return 0
