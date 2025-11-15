// 函数: ?GetNext@TopologyObject@GlobalCore@details@Concurrency@@UBEPAUITopologyExecutionResource@4@XZ
// 地址: 0x6ed6ac
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx_1 = *(arg1 + 4)
void* eax = Concurrency::details::GlobalNode::GetNextGlobalCore(*(ecx_1 + 0xc), ecx_1)

if (eax == 0)
    return 0

return *(eax + 0x20)
