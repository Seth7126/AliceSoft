// 函数: ?GetNext@TopologyObject@GlobalNode@details@Concurrency@@UBEPAUITopologyNode@4@XZ
// 地址: 0x6ed6c3
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx_1 = *(arg1 + 4)
void* eax = Concurrency::details::ResourceManager::GetNextGlobalNode(*(ecx_1 + 0x18), ecx_1)

if (eax == 0)
    return 0

return *(eax + 0x24)
