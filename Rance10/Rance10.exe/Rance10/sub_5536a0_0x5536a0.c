// 函数: sub_5536a0
// 地址: 0x5536a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4_1 = arg1
int32_t eax = *(arg1 + 0x2c8)
int32_t* esi = *(arg1 + 0x2c4)
int32_t ebx = 0
uint32_t ebp_3 = (eax - esi + 3) u>> 2

if (esi u> eax)
    ebp_3 = 0

if (ebp_3 != 0)
    do
        int32_t* edi_1 = *esi
        
        if (edi_1 != 0)
            Concurrency::details::AllocatorBucket::~AllocatorBucket(edi_1)
            int32_t var_18_1 = 0x6c
            operator new(edi_1)
        
        ebx += 1
        esi = &esi[1]
    while (ebx != ebp_3)

int32_t result = *(arg1 + 0x2c4)
*(arg1 + 0x2c8) = result
return result
