# 2026-05-27T10:41:35.605107500
import vitis

client = vitis.create_client()
client.set_workspace(path="LED_Controller")

platform = client.create_platform_component(name = "LED_Controller",hw_design = "$COMPONENT_LOCATION/../led_test_system_wrapper.xsa",os = "standalone",cpu = "ps7_cortexa9_0",domain_name = "standalone_ps7_cortexa9_0",compiler = "gcc")

