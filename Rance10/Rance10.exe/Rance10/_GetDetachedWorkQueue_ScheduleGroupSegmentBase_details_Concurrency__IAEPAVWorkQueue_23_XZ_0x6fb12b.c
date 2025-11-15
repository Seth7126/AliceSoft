// 函数: ?GetDetachedWorkQueue@ScheduleGroupSegmentBase@details@Concurrency@@IAEPAVWorkQueue@23@XZ
// 地址: 0x6fb12b
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_8 = arg1
int32_t esi = 0
int32_t ebx = *(arg1 + 0xe8)

if (ebx s> 0)
    do
        uint32_t eax_2 = sub_6efd4d(arg1 + 0xa8, esi)
        
        if (eax_2 != 0 && sub_6fb501(arg1 + 0xa8, eax_2, esi, 0) != 0)
            void* result = *(eax_2 + 8)
            *(result + 0x38)
            *(result + 0x38) = 0
            sub_6f1a0a(*(arg1 + 0x100))
            return result
        
        esi += 1
    while (esi s< ebx)

return nullptr
