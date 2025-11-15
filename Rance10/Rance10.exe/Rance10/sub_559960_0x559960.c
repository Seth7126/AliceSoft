// 函数: sub_559960
// 地址: 0x559960
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = *arg1
int32_t ebx = 0
uint32_t ebp_3 = (arg1[1] - esi + 3) u>> 2

if (esi u> arg1[1])
    ebp_3 = 0

if (ebp_3 == 0)
    arg1[1] = esi
    return esi

do
    int32_t* edi_1 = *esi
    
    if (edi_1 != 0)
        Concurrency::details::AllocatorBucket::~AllocatorBucket(edi_1)
        int32_t var_14_1 = 0x6c
        operator new(edi_1)
    
    ebx += 1
    esi = &esi[1]
while (ebx != ebp_3)

int32_t eax = *arg1
arg1[1] = eax
return eax
