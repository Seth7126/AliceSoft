// 函数: sub_4b0450
// 地址: 0x4b0450
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebp = arg2
bool var_9 = arg1[3].b != 0
sub_4263a0(ebp + 4, &var_9)
var_9 = *(arg1 + 0xd) != 0
sub_4263a0(ebp + 4, &var_9)
var_9 = *(arg1 + 0xe) != 0
sub_4263a0(ebp + 4, &var_9)
var_9 = *(arg1 + 0xf) != 0
sub_4263a0(ebp + 4, &var_9)
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x2aaaaaab, arg1[1] - *arg1)
int32_t edx_1 = edx s>> 1
sub_6ca100(ebp, (edx_1 u>> 0x1f) + edx_1)
int32_t* edi = *arg1
void* result = arg1[1]
int32_t* var_8 = edi

while (edi != result)
    sub_6ca100(ebp, (edi[1] - *edi) s>> 2)
    int32_t* esi_1 = *edi
    int32_t ebx_1 = 0
    uint32_t ebp_4 = (edi[1] - esi_1 + 3) u>> 2
    
    if (esi_1 u> edi[1])
        ebp_4 = 0
    
    if (ebp_4 != 0)
        do
            sub_6ca100(arg2, *esi_1)
            ebx_1 += 1
            esi_1 = &esi_1[1]
        while (ebx_1 != ebp_4)
        
        edi = var_8
    
    ebp = arg2
    edi = &edi[3]
    var_8 = edi

result.b = 1
return result
