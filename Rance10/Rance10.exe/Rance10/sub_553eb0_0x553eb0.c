// 函数: sub_553eb0
// 地址: 0x553eb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4_1 = arg1
void* ebp = arg2
int32_t eax = *(arg1 + 0x24)
void* edx = arg1 + 0x10
int32_t esi = *(edx + 0x10)
void* ecx

if (eax u< 0x10)
    ecx = edx
else
    ecx = *edx

if (eax u>= 0x10)
    edx = *edx

arg2.b = 0
void* var_18 = arg2
sub_6ca200(ebp + 4, *(ebp + 8), edx, ecx + esi)
arg2.b = 0
sub_4263a0(ebp + 4, &arg2)
sub_6ca100(ebp, *(arg1 + 0x28))
sub_6ca100(ebp, (*(arg1 + 0x30) - *(arg1 + 0x2c)) s>> 2)
int32_t eax_5 = *(arg1 + 0x30)
int32_t* esi_1 = *(arg1 + 0x2c)
int32_t edi_1 = 0
uint32_t ebx_3 = (eax_5 - esi_1 + 3) u>> 2

if (esi_1 u> eax_5)
    ebx_3 = 0

if (ebx_3 != 0)
    do
        sub_6ca100(ebp, *esi_1)
        edi_1 += 1
        esi_1 = &esi_1[1]
    while (edi_1 != ebx_3)

sub_6ca100(ebp, *(arg1 + 0x2b0))
arg2.b = *(arg1 + 0x2b4) != 0
sub_4263a0(ebp + 4, &arg2)
sub_6ca100(ebp, *(arg1 + 0x2b8))
sub_6ca100(ebp, *(arg1 + 0x27c))
sub_6ca100(ebp, *(arg1 + 0x280))
sub_6ca100(ebp, *(arg1 + 0x28c))
sub_6ca100(ebp, *(arg1 + 0x288))
sub_6ca100(ebp, *(arg1 + 0x284))
arg2 = *(arg1 + 0x294)
sub_6ca100(ebp, arg2)
arg2 = *(arg1 + 0x298)
sub_6ca100(ebp, arg2)
sub_6ca100(ebp, *(arg1 + 0x2a4))
sub_6ca100(ebp, *(arg1 + 0x2a0))
sub_6ca100(ebp, *(arg1 + 0x29c))
arg2.b = *(arg1 + 0x2ac) != 0
sub_4263a0(ebp + 4, &arg2)
sub_6ca100(ebp, *(arg1 + 0x2bc))
arg2.b = *(arg1 + 0x2c0) != 0
sub_4263a0(ebp + 4, &arg2)
sub_6ca100(ebp, *(arg1 + 0x2e0))
sub_6ca100(ebp, *(arg1 + 0x2e4))
sub_6ca100(ebp, *(arg1 + 0x2ec))
sub_6ca100(ebp, *(arg1 + 0x2f0))
void* result
result.b = 1
return result
