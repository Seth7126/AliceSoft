// 函数: ?LocateUnrealizedChores@ScheduleGroupSegmentBase@details@Concurrency@@IAEPAVWorkQueue@23@XZ
// 地址: 0x6fb436
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t i = 0

if (*(arg1 + 0x98) s> 0)
    do
        int32_t* eax_1 = sub_6efd4d(arg1 + 0x58, i)
        
        if (eax_1 != 0)
            if (eax_1[1] s> *eax_1 || eax_1[0x14] s> eax_1[0x13])
                return eax_1
            
            if (eax_1[0xe] == 1)
                Concurrency::details::ScheduleGroupSegmentBase::SafelyDeleteDetachedWorkQueue(arg1, 
                    eax_1)
        
        i += 1
    while (i s< *(arg1 + 0x98))

int32_t* eax_3
eax_3.b = *(arg1 + 0x4c) != *(arg1 + 0x50)
return eax_3
