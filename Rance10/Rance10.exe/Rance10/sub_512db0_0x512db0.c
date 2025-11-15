// 函数: sub_512db0
// 地址: 0x512db0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebp = arg2
int32_t* edi = arg1
int32_t* var_8 = edi
sub_6ca100(ebp, 6)
sub_6ca100(ebp, edi[1])
int32_t* esi = *edi
void* eax = *esi
void* var_c = eax

if (eax != esi)
    do
        int32_t eax_1 = *(eax + 0x24)
        void* edx_1
        
        if (eax_1 u< 0x10)
            edx_1 = eax + 0x10
        else
            edx_1 = *(eax + 0x10)
        
        void* ecx_2
        
        if (eax_1 u< 0x10)
            ecx_2 = eax + 0x10
        else
            ecx_2 = *(eax + 0x10)
        
        int32_t var_20_1 = 0.d
        sub_6ca200(ebp + 4, *(ebp + 8), ecx_2, edx_1 + *(eax + 0x20))
        arg2.b = 0
        sub_4263a0(ebp + 4, &arg2)
        sub_6ca100(ebp, *(eax + 0x28))
        sub_429080(&var_c)
        eax = var_c
    while (eax != esi)
    
    edi = var_8

int32_t ebx_2 = edi[7]
arg2.b = ebx_2.b
sub_4263a0(ebp + 4, &arg2)
arg2.b = (ebx_2 u>> 8).b
sub_4263a0(ebp + 4, &arg2)
arg2.b = (ebx_2 u>> 0x10).b
sub_4263a0(ebp + 4, &arg2)
arg2.b = (ebx_2 u>> 0x18).b
sub_4263a0(ebp + 4, &arg2)
void** esi_1 = edi[6]
void* eax_7 = *esi_1
var_c = eax_7

if (eax_7 != esi_1)
    do
        void* ecx_11 = eax_7 + 0x10
        int32_t eax_8 = *(ecx_11 + 0x14)
        void* edx_2
        
        if (eax_8 u< 0x10)
            edx_2 = ecx_11
        else
            edx_2 = *ecx_11
        
        if (eax_8 u>= 0x10)
            ecx_11 = *ecx_11
        
        int32_t var_20_8 = 0.d
        sub_6ca200(ebp + 4, *(ebp + 8), ecx_11, edx_2 + *(eax_7 + 0x20))
        arg2.b = 0
        sub_4263a0(ebp + 4, &arg2)
        sub_429080(&var_c)
        eax_7 = var_c
    while (eax_7 != esi_1)
    
    edi = var_8

sub_6ca100(ebp, edi[9])
int32_t* esi_2 = edi[8]
void* i = *esi_2
arg2 = i

for (; i != esi_2; i = arg2)
    sub_6ca100(ebp, *(i + 0x10))
    sub_429080(&arg2)

i.b = 1
return i
