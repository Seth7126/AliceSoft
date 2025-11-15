// 函数: sub_4e8e20
// 地址: 0x4e8e20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebx = arg2
sub_6ca100(ebx, *(arg1 + 0x50))
sub_6ca100(ebx, *(arg1 + 0x54))
sub_6ca100(ebx, *(arg1 + 0x58))
sub_6ca100(ebx, *(arg1 + 0x5c))
int32_t edx = *(arg1 + 0x74)
void* ecx_4 = arg1 + 0x60
int32_t edi = *(ecx_4 + 0x10)
void* eax

if (edx u< 0x10)
    eax = ecx_4
else
    eax = *ecx_4

if (edx u>= 0x10)
    ecx_4 = *ecx_4

arg2.b = 0
void* var_1c_4 = arg2
sub_6ca200(ebx + 4, *(ebx + 8), ecx_4, eax + edi)
arg2.b = 0
sub_4263a0(ebx + 4, &arg2)
int32_t eax_2 = *(arg1 + 0x8c)
void* ecx_7 = arg1 + 0x78
int32_t edi_1 = *(ecx_7 + 0x10)
void* edx_1

if (eax_2 u< 0x10)
    edx_1 = ecx_7
else
    edx_1 = *ecx_7

if (eax_2 u>= 0x10)
    ecx_7 = *ecx_7

arg2.b = 0
void* var_1c_6 = arg2
sub_6ca200(ebx + 4, *(ebx + 8), ecx_7, edx_1 + edi_1)
arg2.b = 0
sub_4263a0(ebx + 4, &arg2)
sub_6ca100(ebx, *(arg1 + 0x94))
sub_6ca100(ebx, *(arg1 + 0x98))
sub_6ca100(ebx, *(arg1 + 0xa4))
sub_6ca100(ebx, *(arg1 + 0xa0))
sub_6ca100(ebx, *(arg1 + 0x9c))
arg2 = *(arg1 + 0xac)
sub_6ca100(ebx, arg2)
arg2 = *(arg1 + 0xb0)
sub_6ca100(ebx, arg2)
sub_6ca100(ebx, *(arg1 + 0xbc))
sub_6ca100(ebx, *(arg1 + 0xb8))
sub_6ca100(ebx, *(arg1 + 0xb4))
sub_6ca100(ebx, *(arg1 + 0xc4))
sub_6ca100(ebx, *(arg1 + 0xc8))
sub_6ca100(ebx, *(arg1 + 0xcc))
sub_6ca100(ebx, *(arg1 + 0xd0))
sub_6ca100(ebx, *(arg1 + 0xd4))
sub_6ca100(ebx, *(arg1 + 0xd8))
sub_6ca100(ebx, *(arg1 + 0xe0))
sub_6ca100(ebx, *(arg1 + 0xe4))
sub_6ca100(ebx, *(arg1 + 0xf0))
sub_6ca100(ebx, *(arg1 + 0xec))
sub_6ca100(ebx, *(arg1 + 0xe8))
arg2 = *(arg1 + 0xf8)
sub_6ca100(ebx, arg2)
arg2 = *(arg1 + 0xfc)
sub_6ca100(ebx, arg2)
sub_6ca100(ebx, *(arg1 + 0x108))
sub_6ca100(ebx, *(arg1 + 0x104))
sub_6ca100(ebx, *(arg1 + 0x100))
int32_t eax_4
int32_t edx_2
edx_2:eax_4 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x114) - *(arg1 + 0x110))
int32_t edx_3 = edx_2 s>> 2
int32_t ebp_2 = (edx_3 u>> 0x1f) + edx_3
sub_6ca100(ebx, ebp_2)
int32_t edi_2 = 0

if (ebp_2 s> 0)
    int32_t ebp_3 = 0
    
    do
        int32_t eax_5
        int32_t edx_4
        edx_4:eax_5 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x114) - *(arg1 + 0x110))
        int32_t edx_5 = edx_4 s>> 2
        void** ecx_42
        
        if ((edx_5 u>> 0x1f) + edx_5 s<= edi_2 || edi_2 s< 0)
            ecx_42 = arg1 + 4
        else
            ecx_42 = *(arg1 + 0x110) + ebp_3
        
        arg2 = ecx_42[4]
        int32_t eax_10 = ecx_42[5]
        void** edx_6
        
        if (eax_10 u< 0x10)
            edx_6 = ecx_42
        else
            edx_6 = *ecx_42
        
        if (eax_10 u>= 0x10)
            ecx_42 = *ecx_42
        
        int32_t var_1c_35 = 0.d
        sub_6ca200(ebx + 4, *(ebx + 8), ecx_42, arg2 + edx_6)
        arg2.b = 0
        sub_4263a0(ebx + 4, &arg2)
        edi_2 += 1
        ebp_3 += 0x18
    while (edi_2 s< ebp_2)

sub_6ca100(ebx, *(arg1 + 0x11c))
sub_6ca100(ebx, *(arg1 + 0x120))
void* result
result.b = 1
return result
