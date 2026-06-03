# 2026-05-27T10:54:11.266707700
import vitis

client = vitis.create_client()
client.set_workspace(path="LED_Controller")

platform = client.create_platform_component(name = "LED_Controller_platform",hw_design = "$COMPONENT_LOCATION/../led_test_system_wrapper.xsa",os = "standalone",cpu = "ps7_cortexa9_0",domain_name = "standalone_ps7_cortexa9_0",compiler = "gcc")

client.delete_component(name="LED_Controller")

client.delete_component(name="componentName")

comp = client.create_app_component(name="LED_Controller_Application",platform = "$COMPONENT_LOCATION/../LED_Controller_platform/export/LED_Controller_platform/LED_Controller_platform.xpfm",domain = "standalone_ps7_cortexa9_0")

platform = client.get_component(name="LED_Controller_platform")
status = platform.build()

comp = client.get_component(name="LED_Controller_Application")
comp.build()

status = platform.build()

comp.build()

status = platform.build()

comp.build()

vitis.dispose()

