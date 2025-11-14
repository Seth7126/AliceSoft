// 函数: sub_42da80
// 地址: 0x42da80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

__chkstk(0x1008)
int32_t* arg_1004 = __security_cookie ^ &__return_addr
char* ecx = arg2
int32_t* eax_1
eax_1.b = *ecx
char arg_4
char* esi = &arg_4
__return_addr = nullptr

while (eax_1.b != 0)
    if ((eax_1.b u>= 0x81 && eax_1.b u<= 0x9f) || (eax_1.b u>= 0xe0 && eax_1.b u<= 0xef))
        *esi = eax_1.b
        eax_1.b = ecx[1]
        esi[1] = eax_1.b
        esi = &esi[2]
        ecx = &ecx[2]
    else if (eax_1.b != 0x40)
        *esi = eax_1.b
        esi = &esi[1]
        ecx = &ecx[1]
    else
        eax_1.b = ecx[1]
        ecx = &ecx[1]
        *esi = 0x3a3a
        void* esi_1
        char* edi_1
        
        if (eax_1.b == 0x30)
            edi_1 = esi
            esi_1 = &esi[2]
        label_42db29:
            void* edi_2 = edi_1 - &arg_4
            sub_69d850(esi_1, &arg_4, edi_2)
            esi = esi_1 + edi_2
            break
        
        if (eax_1.b == 0x31)
            edi_1 = esi
            esi[2] = 0x7e
            esi_1 = &esi[3]
            goto label_42db29
        
        if (eax_1.b == 0x32)
            edi_1 = esi
            esi[2] = 0x21
            esi_1 = &esi[3]
            goto label_42db29
        
        esi = &esi[2]
    
    eax_1.b = *ecx

*esi = 0
arg1[5] = 0xf
arg1[4] = 0
*arg1 = 0
void* ecx_1

if (arg_4 != 0)
    char* ecx_2 = &arg_4
    
    do
        eax_1.b = *ecx_2
        ecx_2 = &ecx_2[1]
    while (eax_1.b != 0)
    
    void arg_5
    ecx_1 = ecx_2 - &arg_5
else
    ecx_1 = nullptr

sub_402110(arg1, &arg_4, ecx_1)
sub_69a5bc(arg_1004 ^ &__return_addr)
return arg1
