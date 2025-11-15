// 函数: sub_4ffc20
// 地址: 0x4ffc20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebx = arg2
sub_6ca100(ebx, arg1[0x13])
sub_6ca100(ebx, arg1[0x14])
sub_6ca100(ebx, arg1[0x15])
sub_6ca100(ebx, arg1[0x16])
sub_6ca100(ebx, arg1[0x17])
int32_t eax = arg1[0x1d]
void* ecx_5 = &arg1[0x18]
int32_t edi = *(ecx_5 + 0x10)
void* edx

if (eax u< 0x10)
    edx = ecx_5
else
    edx = *ecx_5

if (eax u>= 0x10)
    ecx_5 = *ecx_5

arg2.b = 0
void* var_1c_5 = arg2
sub_6ca200(ebx + 4, *(ebx + 8), ecx_5, edx + edi)
arg2.b = 0
sub_4263a0(ebx + 4, &arg2)
sub_6ca100(ebx, arg1[0x1e])
sub_6ca100(ebx, arg1[0x20])
sub_6ca100(ebx, arg1[0x21])
sub_6ca100(ebx, arg1[0x24])
sub_6ca100(ebx, arg1[0x23])
sub_6ca100(ebx, arg1[0x22])
arg2 = arg1[0x26]
sub_6ca100(ebx, arg2)
arg2 = arg1[0x27]
sub_6ca100(ebx, arg2)
sub_6ca100(ebx, arg1[0x2a])
sub_6ca100(ebx, arg1[0x29])
sub_6ca100(ebx, arg1[0x28])
int32_t eax_2
int32_t edx_1
edx_1:eax_2 = muls.dp.d(0x2aaaaaab, arg1[0x2d] - arg1[0x2c])
int32_t edx_2 = edx_1 s>> 2
int32_t ebp_2 = (edx_2 u>> 0x1f) + edx_2
sub_6ca100(ebx, ebp_2)
int32_t edi_1 = 0

if (ebp_2 s> 0)
    int32_t ebp_3 = 0
    
    do
        int32_t eax_3
        int32_t edx_3
        edx_3:eax_3 = muls.dp.d(0x2aaaaaab, arg1[0x2d] - arg1[0x2c])
        int32_t edx_4 = edx_3 s>> 2
        void** ecx_25
        
        if ((edx_4 u>> 0x1f) + edx_4 s<= edi_1 || edi_1 s< 0)
            ecx_25 = arg1
        else
            ecx_25 = arg1[0x2c] + ebp_3
        
        arg2 = ecx_25[4]
        int32_t eax_8 = ecx_25[5]
        void** edx_5
        
        if (eax_8 u< 0x10)
            edx_5 = ecx_25
        else
            edx_5 = *ecx_25
        
        if (eax_8 u>= 0x10)
            ecx_25 = *ecx_25
        
        int32_t var_1c_19 = 0.d
        sub_6ca200(ebx + 4, *(ebx + 8), ecx_25, arg2 + edx_5)
        arg2.b = 0
        sub_4263a0(ebx + 4, &arg2)
        edi_1 += 1
        ebp_3 += 0x18
    while (edi_1 s< ebp_2)

sub_6ca100(ebx, arg1[0x2f])
sub_6ca100(ebx, arg1[0x30])
void* result
result.b = 1
return result
