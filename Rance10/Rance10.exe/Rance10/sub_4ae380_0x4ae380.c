// 函数: sub_4ae380
// 地址: 0x4ae380
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = arg2
sub_6ca100(edi, *arg1)
sub_6ca100(edi, arg1[1])
sub_6ca100(edi, arg1[2])
sub_6ca100(edi, arg1[4])
sub_6ca100(edi, arg1[5])
sub_6ca100(edi, arg1[6])
sub_6ca100(edi, arg1[7])
arg2.b = arg1[8].b != 0
sub_4263a0(edi + 4, &arg2)
sub_6ca100(edi, arg1[9])
int32_t edx = arg1[0xf]
void* ecx_9 = &arg1[0xa]
int32_t ebp = *(ecx_9 + 0x10)
void* eax

if (edx u< 0x10)
    eax = ecx_9
else
    eax = *ecx_9

if (edx u>= 0x10)
    ecx_9 = *ecx_9

arg2.b = 0
void* var_14_9 = arg2
sub_6ca200(edi + 4, *(edi + 8), ecx_9, eax + ebp)
arg2.b = 0
sub_4263a0(edi + 4, &arg2)
int32_t eax_2 = arg1[0x15]
void* ecx_12 = &arg1[0x10]
int32_t ebp_1 = *(ecx_12 + 0x10)
void* edx_1

if (eax_2 u< 0x10)
    edx_1 = ecx_12
else
    edx_1 = *ecx_12

if (eax_2 u>= 0x10)
    ecx_12 = *ecx_12

arg2.b = 0
void* var_14_11 = arg2
sub_6ca200(edi + 4, *(edi + 8), ecx_12, edx_1 + ebp_1)
arg2.b = 0
sub_4263a0(edi + 4, &arg2)
sub_6ca100(edi, arg1[0x16])
sub_6ca100(edi, arg1[0x17])
sub_6ca100(edi, arg1[0x18])
sub_6ca100(edi, arg1[0x19])
sub_6ca100(edi, arg1[0x1a])
sub_6ca100(edi, arg1[0x1b])
arg2.b = arg1[0x1c].b != 0
sub_4263a0(edi + 4, &arg2)
sub_6ca100(edi, arg1[3])
arg2.b = *(arg1 + 0x71) != 0
sub_4263a0(edi + 4, &arg2)
void* result
result.b = 1
return result
